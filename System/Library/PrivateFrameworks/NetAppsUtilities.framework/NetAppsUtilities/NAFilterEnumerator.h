@class NSEnumerator;

@interface NAFilterEnumerator : NSEnumerator

@property (readonly, nonatomic) NSEnumerator *enumerator;
@property (readonly, copy, nonatomic) id /* block */ filter;

- (id)nextObject;
- (void).cxx_destruct;
- (id)allObjects;
- (id)initWithEnumerator:(id)a0 filter:(id /* block */)a1;

@end
