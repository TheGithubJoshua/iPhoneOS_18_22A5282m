@class NSMutableDictionary;

@interface MFPObjectTable : NSObject {
    NSMutableDictionary *mObjects;
}

- (id)init;
- (void)setObject:(id)a0 atIndex:(int)a1;
- (id)objectAtIndex:(int)a0;
- (void).cxx_destruct;

@end
