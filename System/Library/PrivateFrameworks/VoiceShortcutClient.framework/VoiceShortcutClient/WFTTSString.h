@class NSArray, NSString;

@interface WFTTSString : NSObject

@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) NSString *displayString;

+ (id)parseAnnotatedString:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithComponents:(id)a0;

@end
