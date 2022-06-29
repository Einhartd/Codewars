class User:

    def __init__(self):
        ranks = [-8, -7, -6, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8]
        progress_start = 0
        progress_end = 100
        self.__progress_end = progress_end
        self.ranks = ranks
        self.rank = self.ranks[0]
        self.progress = progress_start
        self.progress_rank = None

# Method which user can use to calculate ranking and progress level
    def inc_progress(self, progress_rank):
        self.progress_rank = progress_rank
        if self.progress_rank in self.ranks:
            if self.rank == 8:
                self.progress = 0
            else:
                self.__calculate_ranking()
        else:
            raise Exception("out of range")

# Method which calculates level gap between different ranks
    def __calculate_level(self):
        if self.rank < 0 and self.progress_rank < 0:
            level = abs(self.rank) - abs(self.progress_rank)
            return abs(level)
        elif self.rank > 0 and self.progress_rank > 0:
            level = self.rank - self.progress_rank
            return abs(level)
        else:
            level = abs(self.rank) + abs(self.progress_rank) - 1
            return abs(level)

# Method which adds points to progress when someone has done challenge on the same level as he currently has
    def __add_same_progress(self):
        self.progress = self.progress + 3

# Method which calculates points that will be added to progress when challenge was done below the current level
    def __add_below_progress(self):
        level = self.__calculate_level()
        if level == 1:
            self.progress = self.progress + 1
        else:
            pass

# Method which calculates points that will be added to progress when challenge was done above current level
    def __add_above_progress(self):
        level = self.__calculate_level()
        self.progress = self.progress + (level * level * 10)

# Method which transforms accumulated progress into ranking levels
    def __calculate_progress(self):
        if self.rank == 8:
            self.progress = 0
        else:
            while self.progress >= self.__progress_end:
                self.progress = self.progress - self.__progress_end
                index = self.ranks.index(self.rank)
                self.rank = self.ranks[index + 1]
                if self.rank == 8:
                    self.progress = 0
                    break

# Method which connects above method into working program
    def __calculate_ranking(self):
        if self.progress_rank > self.rank:
            self.__add_above_progress()
            self.__calculate_progress()
        elif self.progress_rank == self.rank:
            self.__add_same_progress()
            self.__calculate_progress()
        else:
            self.__add_below_progress()
            self.__calculate_progress()


# Testing
if __name__ == "__main__":
    user = User()
    print(user.rank)
    print(user.progress)
