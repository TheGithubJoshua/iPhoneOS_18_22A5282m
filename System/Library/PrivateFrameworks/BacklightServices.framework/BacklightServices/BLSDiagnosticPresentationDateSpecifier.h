@class NSArray, NSString, NSDate;

@interface BLSDiagnosticPresentationDateSpecifier : NSObject <BLSPresentationDateSpecifying, NSSecureCoding, BSXPCCoding> {
    NSArray *_specifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *presentationDate;
@property (readonly, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithSpecifier:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)bls_shortLoggingString;
- (id)bls_loggingString;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithPresentationDate:(id)a0 specifiers:(id)a1;

@end
