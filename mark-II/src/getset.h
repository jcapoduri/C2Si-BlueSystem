#ifndef GETSET_H
#define GETSET_H

#define GETSET(Type, MemberName, FaceName) \
      Type get##FaceName() const { \
            return MemberName; \
      }; \
      void set##FaceName(Type value) { \
            MemberName = value; \
      }

#define GETSETR(Type, MemberName, FaceName) \
      const Type &get##FaceName() const { \
         return MemberName; \
      }; \
      void set##FaceName(const Type &value) { \
         MemberName = value; \
      }

#define GET(Type, MemberName, FaceName) \
      Type get##FaceName() const { \
         return MemberName; \
      }

#define GETR(Type, MemberName, FaceName) \
      const Type &get##FaceName() const { \
         return MemberName; \
      }

#define GETRNC(Type, MemberName, FaceName) \
      Type &get##FaceName() { \
         return MemberName; \
      }

#define SET(Type, MemberName, FaceName) \
        void set##FaceName(const Type &value) { \
            MemberName = value; \
        }


#endif // GETSET_H
