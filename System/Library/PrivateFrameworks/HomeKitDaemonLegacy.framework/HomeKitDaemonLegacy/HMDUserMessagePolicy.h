@class HMDHome, NSUUID;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying> {
    NSUUID *_homeUUID;
}

@property (readonly, weak) HMDHome *home;
@property (readonly) unsigned long long userPrivilege;
@property (readonly) BOOL requiresRemoteAccess;
@property (readonly) BOOL requiresCameraStreamingAccess;

+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__initWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

@end
