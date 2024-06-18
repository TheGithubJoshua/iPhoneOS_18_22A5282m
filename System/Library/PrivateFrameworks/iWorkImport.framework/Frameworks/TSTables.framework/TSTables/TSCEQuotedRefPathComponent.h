@class NSMutableArray;

@interface TSCEQuotedRefPathComponent : NSObject {
    NSMutableArray *_refPathWords;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)numWords;
- (id)wordAtIndex:(unsigned long long)a0;
- (void)addRefPathWord:(id)a0;
- (void)removeRefPathWordAtIndex:(unsigned long long)a0;
- (id)trimmedStringStartingAtWord:(unsigned long long)a0;
- (id)trimmedStringStartingAtWord:(unsigned long long)a0 withPreserveFlags:(BOOL)a1;

@end
