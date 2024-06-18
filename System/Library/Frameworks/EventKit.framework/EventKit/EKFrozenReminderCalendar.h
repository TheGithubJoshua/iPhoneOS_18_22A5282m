@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)sharees;
- (id)remObjectID;
- (id)_account;
- (int)flags;
- (BOOL)isColorDisplayOnly;
- (id)syncError;
- (id)source;
- (id)unlocalizedTitle;
- (unsigned long long)sharingStatus;
- (id)UUID;
- (id)sharedOwnerName;
- (int)displayOrder;
- (int)allowedEntities;
- (void).cxx_destruct;
- (id)calendarIdentifier;
- (BOOL)isPublished;
- (id)uniqueIdentifier;
- (id)symbolicColorName;
- (id)title;
- (id)colorStringRaw;
- (id)externalID;
- (id)publishURLString;
- (id)allAlarms;
- (id)_list;
- (id)REMColorFromEKHexColorString:(id)a0;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)a0;
- (id)initNewListInStore:(id)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
