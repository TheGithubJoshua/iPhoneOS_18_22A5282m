@class NSMutableDictionary, NSCharacterSet;

@interface TIInputModeParser : NSObject {
    NSMutableDictionary *_inputModeDicts;
    NSCharacterSet *_invalidCharacterSet;
}

+ (id)sharedInstance;

- (id)init;
- (id)stringByReplacingInvalidCharactersWithUnderscores:(id)a0;
- (id)parseInputMode:(id)a0;
- (void).cxx_destruct;

@end
