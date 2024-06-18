@class NSString, MRPlayerPath, NSData, _MROriginProtobuf;

@interface MROrigin : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) MROrigin *anyOrigin;
@property (class, readonly, nonatomic) MROrigin *localOrigin;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic, getter=isLocallyHosted) BOOL locallyHosted;
@property (readonly, nonatomic) _MROriginProtobuf *protobuf;
@property (readonly, nonatomic) MROrigin *skeleton;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isHosted) BOOL hosted;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(int)a0 type:(long long)a1 displayName:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;

@end
