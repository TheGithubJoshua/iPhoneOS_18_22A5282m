@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (id)items;
- (BOOL)addItem:(id)a0;
- (BOOL)removeItem:(id)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)removeAllItems;
- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)indexOfItem:(id)a0;

@end
