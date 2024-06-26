@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface PROConcretePlugInGroup : NSObject {
    NSMutableArray *plugIns;
    struct __CFUUID { } *uuidRef;
    NSString *name;
    NSString *displayName;
    NSMutableDictionary *protocols;
    NSLock *mutex;
}

- (id)displayName;
- (unsigned long long)hash;
- (struct __CFUUID { } *)uuid;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)uuidString;
- (id)plugIns;
- (void)addPlugIn:(id)a0;
- (id)initWithUUID:(struct __CFUUID { } *)a0 name:(id)a1 bundle:(id)a2;
- (BOOL)isEqualToPlugInGroup:(id)a0;
- (id)plugInsForProtocols:(id)a0;
- (void)removePlugIn:(id)a0;

@end
