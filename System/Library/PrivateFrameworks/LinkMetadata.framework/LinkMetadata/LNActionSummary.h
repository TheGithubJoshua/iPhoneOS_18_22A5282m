@class NSString, NSArray, LNActionSummaryString, NSURL;

@interface LNActionSummary : LNActionConfiguration <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNActionSummaryString *summaryString;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *table;
@property (readonly, nonatomic) NSArray *otherParameterIdentifiers;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionConfigurationByEvaluatingAction:(id)a0;
- (id)initWithSummaryString:(id)a0 bundleURL:(id)a1 table:(id)a2 otherParameterIdentifiers:(id)a3;
- (id)localizedFormatStringForLocaleIdentifier:(id)a0;

@end