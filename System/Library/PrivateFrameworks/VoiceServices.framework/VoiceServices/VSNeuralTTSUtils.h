@interface VSNeuralTTSUtils : NSObject

+ (BOOL)hasAMX;
+ (BOOL)hasANE;
+ (BOOL)isANEModelCompiled:(id)a0;
+ (BOOL)isNeuralVoiceReady:(id)a0;
+ (BOOL)shouldUseNeuralVoice:(id)a0;
+ (BOOL)hasOTAANEModel:(id)a0;
+ (void)compileANEModel:(id)a0;
+ (BOOL)hasCompactNeuralFallback:(id)a0;
+ (BOOL)isANECompilationPlatform;
+ (BOOL)isNeuralFallbackCondition;
+ (BOOL)isNeuralTTSPlatform;

@end
