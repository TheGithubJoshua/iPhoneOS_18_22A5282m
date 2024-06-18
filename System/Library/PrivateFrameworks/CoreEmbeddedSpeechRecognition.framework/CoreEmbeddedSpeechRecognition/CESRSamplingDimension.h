@class NSString;

@interface CESRSamplingDimension : NSObject

@property (readonly, copy, nonatomic) NSString *asrLocale;

- (void).cxx_destruct;
- (id)description;
- (BOOL)matches:(id)a0;
- (id)initWithAsrLocale:(id)a0;

@end
