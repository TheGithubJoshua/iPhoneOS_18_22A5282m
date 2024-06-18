@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (BOOL)enumerateStringsWithBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)addString:(id)a0;

@end
