@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (id)asString;
- (id)documentID;
- (id)folderID;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)rawID;
- (BOOL)isFpfsItem;
- (unsigned char)type;
- (id)itemDBRowID;

@end
