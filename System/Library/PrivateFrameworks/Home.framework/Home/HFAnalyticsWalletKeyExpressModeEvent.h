@class NSNumber;

@interface HFAnalyticsWalletKeyExpressModeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *expressModeSelectionNumber;
@property (retain, nonatomic) NSNumber *expressModeLocationNumber;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
