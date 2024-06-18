@class NSUUID, NSString, NSSet;

@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *originalString;
@property (copy, nonatomic) NSString *replacementString;
@property (copy, nonatomic) NSString *phonemes;
@property (copy, nonatomic) NSSet *languages;
@property (copy, nonatomic) NSSet *voiceIds;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL ignoreCase;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
@property (nonatomic) BOOL appliesToAllApps;
@property (copy, nonatomic) NSSet *bundleIdentifiers;
@property (readonly, nonatomic) BOOL isReplacementTextAllPunctuation;
@property (readonly, nonatomic) BOOL isReplacementTextSurroundedByPunctuation;
@property (nonatomic) BOOL isUserSubstitution;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
