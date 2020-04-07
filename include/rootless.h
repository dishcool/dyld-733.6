#ifndef UGH_ROOTLESS_H
#define UGH_ROOTLESS_H

#ifdef __cplusplus
extern "C"
{
#endif
    extern int rootless_check_trusted(const char*);
    extern int rootless_check_trusted_fd(int);
    extern int rootless_check_trusted_class(const char*, const char*);
#ifdef __cplusplus
}
#endif

#endif
