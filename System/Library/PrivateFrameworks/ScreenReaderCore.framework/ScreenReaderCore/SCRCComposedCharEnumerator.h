@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {
    BOOL _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (id)nextObject;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)allObjects;

@end
