import random

# Função de aptidão: Avalia o quão próxima a soma da sequência está do valor alvo.
def fitness(sequence, target):
    return abs(sum(sequence) - target)

# Geração de uma solução aleatória.
def generate_individual(length):
    return [random.randint(0, 9) for _ in range(length)]

# Geração da população inicial.
def generate_population(pop_size, sequence_length):
    return [generate_individual(sequence_length) for _ in range(pop_size)]

# Função de seleção: Torneio simples.
def selection(population, target):
    return random.choice(population)

# Função de cruzamento (crossover): Pontos de corte aleatórios.
def crossover(parent1, parent2):
    crossover_point = random.randint(1, len(parent1) - 1)
    child = parent1[:crossover_point] + parent2[crossover_point:]
    return child

# Função de mutação: Altera um gene aleatório.
def mutate(individual):
    index_to_mutate = random.randint(0, len(individual) - 1)
    individual[index_to_mutate] = random.randint(0, 9)
    return individual

# Parâmetros
target_sum = 50
population_size = 100
sequence_length = 10
generations = 100

# Geração da população inicial
population = generate_population(population_size, sequence_length)

# Evolução da população
best_fitness_history = []

for generation in range(generations):
    # Avaliação da aptidão de cada indivíduo
    fitness_scores = [fitness(individual, target_sum) for individual in population]

    # Seleção de pais
    parents = [selection(population, target_sum) for _ in range(population_size)]

    # Criação da nova geração
    new_population = []

    for _ in range(population_size):
        parent1 = random.choice(parents)
        parent2 = random.choice(parents)
        child = crossover(parent1, parent2)
        if random.random() < 0.1:  # Probabilidade de mutação
            child = mutate(child)
        new_population.append(child)

    population = new_population

    # Encontrar o melhor indivíduo na geração atual
    best_individual = population[fitness_scores.index(min(fitness_scores))]

    # Armazenar o melhor indivíduo e sua geração
    best_fitness_history.append((generation, best_individual, min(fitness_scores)))

# Encontrar o melhor indivíduo global
best_generation, best_individual, best_fitness = min(best_fitness_history, key=lambda x: x[2])

print("Melhor indivíduo encontrado na geração {}:".format(best_generation))
print("Sequência:", best_individual)
print("Soma da sequência:", sum(best_individual))
print("Valor de aptidão:", best_fitness)


class Veiculo {
    public void andar() {
        System.out.println("O veículo está em movimento.");
    }
}

class Bicicleta extends Veiculo {
    @Override
    public void andar() {
        System.out.println("A bicicleta está pedalando.");
    }
}

class Carro extends Veiculo {
    @Override
    public void andar() {
        System.out.println("O carro está acelerando.");
    }
}