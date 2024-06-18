@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (id)_descriptionProem;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)_graphNodeDebugName;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
