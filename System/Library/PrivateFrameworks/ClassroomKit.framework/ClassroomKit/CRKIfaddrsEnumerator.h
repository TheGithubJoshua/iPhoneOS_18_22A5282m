@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator {
    struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *mInterfaces;
    CRKIfaddrs *mCurrentInterface;
}

+ (id)enumeratorWithError:(id *)a0;
+ (id)internetInterfaceEnumeratorWithError:(id *)a0;

- (id)nextObject;
- (id)init;
- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInterfaces:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0;

@end
