@interface MXSampleAnalysisParser : NSObject

+ (void)sendDiagnosticReport:(id)a0 forType:(long long)a1 forSourceID:(long long)a2;
+ (void)sendDiagnosticReport:(id)a0 forType:(long long)a1 forSourceID:(long long)a2 options:(id)a3;
+ (id)getCallStackForReport:(id)a0 withType:(long long)a1;
+ (id)parseCallTree:(id)a0 isAttributedThread:(BOOL)a1;
+ (id)constructPayloadWithReport:(id)a0 withType:(long long)a1;
+ (id)parseCallTreeFrame:(id)a0 withDepth:(unsigned long long)a1;

@end