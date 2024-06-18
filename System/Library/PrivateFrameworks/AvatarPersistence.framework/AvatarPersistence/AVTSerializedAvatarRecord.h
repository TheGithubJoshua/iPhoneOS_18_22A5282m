@protocol AVTAvatarRecord;

@interface AVTSerializedAvatarRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isPuppet;
@property (readonly, copy, nonatomic) id<AVTAvatarRecord> avatarRecord;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAvatarRecord:(id)a0;

@end
