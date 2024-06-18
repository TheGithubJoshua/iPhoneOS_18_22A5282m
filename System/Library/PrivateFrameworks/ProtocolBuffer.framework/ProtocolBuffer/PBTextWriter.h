@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {
    BOOL _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (id)init;
- (BOOL)write:(id)a0;
- (id)string;
- (void)dealloc;
- (void)reset;

@end
