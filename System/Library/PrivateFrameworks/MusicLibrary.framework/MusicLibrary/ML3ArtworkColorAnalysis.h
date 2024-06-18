@class NSString;

@interface ML3ArtworkColorAnalysis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) NSString *primaryTextColor;
@property (readonly, nonatomic) NSString *secondaryTextColor;
@property (readonly, nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (readonly, nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (readonly, nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (id)initWithCoder:(id)a0;
- (id)dictRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithColorAnalysis:(id)a0;
- (id)initWithColorAnalysisDictionary:(id)a0;

@end
