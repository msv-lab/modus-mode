;;; modus-mode.el --- Major mode for the Modus language, working with Modusfiles -*- lexical-binding: t; -*-
;;
;; Copyright (C) 2021 Modus Continens
;;
;; Author: Chris Tomy <https://github.com/thevirtuoso1973>
;; Maintainer: Modus Continens
;; Created: December 02, 2021
;; Version: 0.0.1
;; Keywords: languages modus docker modusfile dockerfile
;; Homepage: https://github.com/modus-continens/modus-mode
;; Package-Requires: ((emacs "24.3"))
;;
;; This file is not part of GNU Emacs.
;;
;;; Commentary:
;; TODO: licence
;;
;;
;;; Code:

(defvar modus-constants
  '())

(defvar modus-builtins
  '("from" "run" "copy"))

(defvar modus-tab-width nil "Width of a tab for modus mode.")

(defvar modus-font-lock-defaults
  `((
     ;; stuff between double quotes
     ("\"\\.\\*\\?" . font-lock-string-face)
     ;; :: , ; :- = . are all special elements
     ("::\\|,\\|;\\|:-\\|=\\|\\." . font-lock-keyword-face)
     ( ,(regexp-opt modus-builtins 'symbols) . font-lock-builtin-face)
     ( ,(regexp-opt modus-constants 'symbols) . font-lock-constant-face))))

;;;###autoload
(define-derived-mode modus-mode prog-mode "Modusfile"
  "modus-mode is a major mode for editing Modusfiles"
  (setq font-lock-defaults modus-font-lock-defaults)

  ;; when there's an override, use it
  ;; otherwise it gets the default value
  (when modus-tab-width
    (setq tab-width modus-tab-width))

  ;; for comments
  (setq comment-start "# ")
  (setq comment-end "")

  ;; FIXME: comments don't work well with `evil-join'
  (modify-syntax-entry ?# "<" modus-mode-syntax-table)
  (modify-syntax-entry ?\n ">" modus-mode-syntax-table)

  ;; Note that there's no need to manually call `modus-mode-hook'; `define-derived-mode'
  ;; will define `modus-mode' to call it properly right before it exits
  )

;;;###autoload
(add-to-list 'auto-mode-alist (cons "\\Modusfile$" 'modus-mode))

(provide 'modus-mode)

;;; modus-mode.el ends here
