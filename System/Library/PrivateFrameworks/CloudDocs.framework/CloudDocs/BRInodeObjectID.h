@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)asString;
- (id)folderID;
- (id)initWithFileID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)rawID;
- (BOOL)isFpfsItem;
- (BOOL)isFolderOrAliasID;
- (unsigned char)type;

@end
