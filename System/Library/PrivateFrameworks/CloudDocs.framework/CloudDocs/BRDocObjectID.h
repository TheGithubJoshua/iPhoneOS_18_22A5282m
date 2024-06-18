@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)asString;
- (id)documentID;
- (id)initWithDocID:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)rawID;
- (id)initWithDocIDNumber:(id)a0;
- (BOOL)isFpfsItem;
- (unsigned char)type;
- (BOOL)isDocumentID;

@end
