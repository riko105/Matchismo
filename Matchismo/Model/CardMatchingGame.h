//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Stepan Paholyk on 8/27/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"
@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck andCardsToPlayWith:(NSInteger)numberOdCardsToPlayWith;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (readonly, nonatomic) NSInteger score;

@end
