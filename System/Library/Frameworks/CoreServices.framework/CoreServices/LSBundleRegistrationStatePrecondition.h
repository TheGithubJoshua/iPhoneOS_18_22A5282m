@class NSString, NSNumber;

@interface LSBundleRegistrationStatePrecondition : LSPrecondition {
    NSString *_bundleID;
    NSNumber *_placeholderInstalled;
    NSNumber *_fullAppInstalled;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initForBundleWithIdentifier:(id)a0 placeholderInstalled:(id)a1 fullApplicationInstalled:(id)a2;
- (BOOL)isMet;

@end
