@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *displayUUID;
@property (readonly, nonatomic) unsigned int contextID;

+ (id)propertiesWithClientID:(id)a0 pid:(int)a1 displayUUID:(id)a2 contextID:(unsigned int)a3;
+ (id)propertiesWithMainDisplayAndClientID:(id)a0 pid:(int)a1 contextID:(unsigned int)a2;

- (id)initWithCoder:(id)a0;
- (void)setPid:(int)a0;
- (id)conciseDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithClientID:(id)a0 pid:(int)a1 displayUUID:(id)a2 contextID:(unsigned int)a3;
- (BOOL)isEqualNotIncludingClientIDAndPid:(id)a0;
- (id)propertiesOneLevelMoreGeneric;

@end
