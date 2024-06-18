@class NSArray;

@interface MPMusicPlayerControllerQueue : NSObject {
    NSArray *_items;
}

@property (readonly, copy, nonatomic) NSArray *items;

- (void)fault;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;

@end
