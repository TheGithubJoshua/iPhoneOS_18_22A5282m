@class PKCreditInstallmentPlan;
@protocol PKBusinessChatContext;

@interface PKAccountServiceAccountResolutionCofiguration : NSObject

@property (retain, nonatomic) PKCreditInstallmentPlan *earlyInstallmentPlan;
@property (retain, nonatomic) id<PKBusinessChatContext> businessChatContext;

- (void).cxx_destruct;
- (id)description;

@end
