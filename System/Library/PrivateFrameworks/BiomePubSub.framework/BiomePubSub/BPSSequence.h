@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;

+ (id)new;

- (id)bookmarkableUpstreams;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;

@end
