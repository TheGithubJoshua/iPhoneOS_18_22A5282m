@interface REDisplayLinkTarget : NSObject {
    void *_clock;
}

- (id)initWithClock:(void *)a0;
- (void)update;
- (void)updateOnQueue;

@end
