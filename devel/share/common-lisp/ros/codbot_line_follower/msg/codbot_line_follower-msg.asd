
(cl:in-package :asdf)

(defsystem "codbot_line_follower-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "pos" :depends-on ("_package_pos"))
    (:file "_package_pos" :depends-on ("_package"))
  ))