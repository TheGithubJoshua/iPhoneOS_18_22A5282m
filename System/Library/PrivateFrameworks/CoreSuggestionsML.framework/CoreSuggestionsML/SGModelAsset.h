@interface SGModelAsset : NSObject

+ (id)mappings;
+ (void)_reset;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)dpRecorderRules;
+ (id)metricsConfig;
+ (id)rules;
+ (id)signatureRules;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)quickResponsesVocab;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)asset;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)nameDetectorRules;
+ (id)quickResponses;
+ (void)_invokeOnUpdateBlock;

@end
