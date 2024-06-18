@class NSString, NSDictionary;

@interface CSLPRFStingSettingsModelData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSDictionary *actionsDictionary;
@property (retain, nonatomic) NSDictionary *secondaryActionsDictionary;
@property (retain, nonatomic) NSDictionary *shortcutsDictionary;
@property (retain, nonatomic) NSDictionary *startWorkoutsDictionary;

+ (id)fromExportData:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toExportData;

@end
