@interface SPUIFeedbackManager : NSObject

+ (void)didDisappearWithReason:(unsigned long long)a0 withQueryId:(unsigned long long)a1;
+ (id)feedbackListener;
+ (void)cardViewDidDisappearWithEvent:(unsigned long long)a0 withQueryId:(unsigned long long)a1;
+ (void)didClearInputWithEvent:(unsigned long long)a0 withQueryId:(unsigned long long)a1;
+ (void)didAppearFromSource:(unsigned long long)a0 withQueryId:(unsigned long long)a1 queryString:(id)a2;
+ (void)flushFeedbackWithCompletion:(id /* block */)a0;

@end
