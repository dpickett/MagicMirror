//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSContentDrawView, NSMutableDictionary;

@interface MSTilePlacer : NSObject
{
    MSContentDrawView *_contentView;
    NSMutableDictionary *_tiles;
}


- (void)addMissingTilesFrom:(id)arg1;
- (void)addTiles:(id)arg1 shouldRedraw:(BOOL)arg2;
- (id)allTileIDs;
- (id)allTiles;
@property(nonatomic) __weak MSContentDrawView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (id)idForTile:(id)arg1;
- (id)init;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)moveTiles;
- (struct CGPoint)originForFirstTile;
- (void)removeTilesNotIncludedIn:(id)arg1;
- (void)removeTilesWithIDs:(id)arg1;
- (void)removeTilesWithIDsFromSuperLayer:(id)arg1;
- (void)repositionExistingTiles;
- (id)requiredTileIdentifiersWithExtraMargin:(BOOL)arg1;
- (void)setPositionForTile:(id)arg1 withID:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *tiles; // @synthesize tiles=_tiles;
- (void)tile;
- (id)tilesWithIDs:(id)arg1;
- (void)unregisterTilesWithIDs:(id)arg1;

@end
