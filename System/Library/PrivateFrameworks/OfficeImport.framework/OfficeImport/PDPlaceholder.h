@interface PDPlaceholder : NSObject {
    int mType;
    int mOrientation;
    int mSize;
    unsigned int mIndex;
    int mBoundsTrack;
}

+ (BOOL)isNonTextType:(int)a0;
+ (BOOL)isTextType:(int)a0;

- (id)init;
- (int)orientation;
- (void)setIndex:(unsigned int)a0;
- (void)setType:(int)a0;
- (unsigned int)index;
- (void)setOrientation:(int)a0;
- (void)setSize:(int)a0;
- (id)description;
- (int)size;
- (int)type;
- (void)setBoundsTrack:(int)a0;
- (int)boundsTrack;

@end
