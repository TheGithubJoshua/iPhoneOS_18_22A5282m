@interface _CDDiagnosticDataReporter : NSObject

+ (void)pushValue:(double)a0 forDistributionKey:(id)a1;
+ (void)setValue:(double)a0 forDistributionKey:(id)a1;
+ (void)clearScalarKey:(id)a0;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1 limitingSigDigs:(unsigned long long)a2;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (void)clearDistributionKey:(id)a0;

@end
