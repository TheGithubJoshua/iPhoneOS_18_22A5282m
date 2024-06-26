@class NSURL, NSString, NSArray;

@interface CRKOpenURLRequest : CATTaskRequest

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) BOOL lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
