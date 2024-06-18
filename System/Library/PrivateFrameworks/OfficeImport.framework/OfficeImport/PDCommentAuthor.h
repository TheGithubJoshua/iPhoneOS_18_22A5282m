@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (unsigned int)id;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (void)setName:(id)a0;
- (void)setId:(unsigned int)a0;
- (id)initials;
- (void)setInitials:(id)a0;
- (unsigned int)colorIndex;
- (unsigned int)lastCommentIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setLastCommentIndex:(unsigned int)a0;

@end
