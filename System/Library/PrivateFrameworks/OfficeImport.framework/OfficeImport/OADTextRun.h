@class OADCharacterProperties;

@interface OADTextRun : NSObject {
    OADCharacterProperties *mProperties;
}

- (void)setProperties:(id)a0;
- (id)init;
- (BOOL)isEmpty;
- (unsigned long long)characterCount;
- (void).cxx_destruct;
- (id)description;
- (id)properties;
- (BOOL)isSimilarToTextRun:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
