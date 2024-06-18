@class NSString, NSArray;

@interface AXAuditContrastResult : NSObject

@property (nonatomic) long long classification;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *primaryColor;
@property (copy, nonatomic) NSString *secondaryColor;
@property (nonatomic) double ratio;
@property (nonatomic) double fontSize;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSArray *compareColors;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
