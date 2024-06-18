@interface CPInterval : NSObject {
    double left;
    double right;
}

- (double)left;
- (BOOL)contains:(id)a0;
- (double)right;
- (BOOL)intersects:(id)a0;
- (void)add:(id)a0;
- (id)initLeft:(double)a0 right:(double)a1;

@end
