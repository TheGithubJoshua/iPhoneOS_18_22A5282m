@class NSURL, NSString, TUSandboxExtendedURL;

@interface TUParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TUSandboxExtendedURL *sandboxExtendedImageURL;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithParticipant:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;
- (BOOL)isEqualToParticipant:(id)a0;

@end
