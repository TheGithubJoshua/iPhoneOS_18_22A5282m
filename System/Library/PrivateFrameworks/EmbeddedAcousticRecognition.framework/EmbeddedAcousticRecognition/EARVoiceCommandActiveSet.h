@class NSSet, NSURL;

@interface EARVoiceCommandActiveSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *suites;
@property (readonly, copy, nonatomic) NSURL *resourceBaseURL;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuites:(id)a0 resourceBaseURL:(id)a1;
- (id)initWithPlistJSONDictionary:(id)a0;
- (id)plistJSONDictionary;

@end