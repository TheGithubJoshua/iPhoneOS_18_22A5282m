@class TRIClient;

@interface MLRTrialTask : NSObject

@property (readonly, nonatomic) TRIClient *triClient;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTriClient:(id)a0;
- (id)initWithTrialTask:(id)a0;

@end
